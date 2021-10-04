const Cart = [{
    path:'img/anime/2.jpg',
    category:'Anime'
},
{
path:'img/anime/3.jpg',
category:'Anime'
},{
path:'img/anime/4.jpg',
category:'Anime'
},
{
path:'img/anime/images.jpg',
category:'Anime'
},
{
path:'img/coding/2.jpg',
category:'Coding'
},
{
path:'img/coding/3.jpg',
category:'Coding'
},
{
path:'img/coding/4.jpg',
category:'Coding'
}
,
{
path:'img/coding/download.jpg',
category:'Coding'
},{
    path:'img/nature/4.jpg',
    category:'Nature'
    },
    {
    path:'img/nature/2.jpg',
    category:'Nature'
    },
    {
    path:'img/nature/3.jpg',
    category:'Nature'
    },
    {
    path:'img/nature/1.jpg',
    category:'Nature'
    }
    ,
    {
    path:'img/nature/5.jpg',
    category:'Nature'
    },
    {
    path:'img/nature/5.jpg',
    category:'Nature'
    }]
const con = document.querySelector('.container')
const btnCon = document.querySelector('.btn-class')

function imageGallery(cart){
    con.innerHTML = ''
    cart.forEach(element => {
        const imgCon = document.createElement('div')
        imgCon.classList.add('img-container');
        imgCon.innerHTML = ` <img src="${element.path}" alt="">`

       con.appendChild(imgCon)
    });

}

function btnCat(){
    let cat = Cart.map(element =>{
        return element.category
    })
    cat  = [...new Set(cat)]
    cat.forEach(element=>{
        const btn = document.createElement('button')
        btn.classList.add('btn')
        btn.innerText = element
        btnCon.appendChild(btn)
    })
  
}



btnCat()


document.addEventListener('DOMContentLoaded',()=>{
    

    const button = document.querySelectorAll('.btn')
    button.forEach(element=>{
        element.addEventListener('click',()=>{
            button.forEach(but=>{
                but.classList.remove('activeClass')

            })
            element.classList.add('activeClass')

            if(element.innerText=='All'){
            

                imageGallery(Cart)

            }else{
                const newImg = Cart.filter(elem=>{
                    if(element.innerText==elem.category){
                        return elem
                    }
                })
              imageGallery(newImg)
            }
            

        })

    })
})



