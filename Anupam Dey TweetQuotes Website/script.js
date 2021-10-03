const quoteContainer = document.getElementById('quote-generator');
const quoteText = document.getElementById('quote');
const authorText = document.getElementById('author');
const twitterBtn = document.getElementById('twitter');
const newQuoteBtn = document.getElementById('new-quote');
const loader = document.getElementById('loader');
function showLoadingSpinner() {
    loader.hidden = false;
    quoteContainer.hidden = true;
}
function completeLoadingSpinner() {
    quoteContainer.hidden = false;
    loader.hidden = true;
}
let apiQuotes = [];
//Show new quote
function newQuote() {
    showLoadingSpinner();
    //Pick a random quote
    // const quote = localQuotes[Math.floor(Math.random() * localQuotes.length)];
    const quote = apiQuotes[Math.floor(Math.random() * apiQuotes.length)];
    //Replece blank into 'Unknown'
    if (!quote.author) {
        authorText.textContent = "Unknown";
    } else {
        authorText.textContent = quote.author;
    }
    //Check the quote length
    if (quote.text.length > 100) {
        quoteText.classList.add('long-quote');
    } else {
        quoteText.classList.remove('long-quote');
    }
    //set quote, hide loader
    quoteText.textContent = quote.text;
    completeLoadingSpinner();
}
// Get quotes
async function getQuotes() {
    showLoadingSpinner();
    const apiUrl = "https://type.fit/api/quotes";
    try {
        const response = await fetch(apiUrl);
        apiQuotes = await response.json();
        newQuote();
    } catch (error) {
        //Catch Error Here
        alert(error);
    }
}

//Tweet Quotes
function tweetQuote() {
    const twitterUrl = `https://twitter.com/intent/tweet?text=${quoteText.textContent} - ${authorText.textContent}`;
    window.open(twitterUrl, '_blank');
}

//event
newQuoteBtn.addEventListener('click', newQuote);
twitterBtn.addEventListener('click', tweetQuote);

getQuotes();
