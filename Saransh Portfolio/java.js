
var x=0;
gsap.utils.toArray("#icon-div li").forEach(i => {
    var tl = gsap.timeline({
      scrollTrigger: {
        trigger: i,
        toggleActions: "restart none restart none",
      }
    });
  
    tl.from(i, {
      duration: 2,
      y:-50,
      opacity: 0,
      rotation: 60,
    }, "+="+x);
    x+=0.2;
  });
  const tl = gsap.timeline({scrollTrigger : {
    trigger: "#landing-img",
    toggleActions: "restart none restart none",
  }});
  tl.from("#texts", {
    duration:2,
    y:-150,
    rotation: 30,
    opacity:0
  })
  tl.from("#landing-img", {
    duration:2,
    y:-150,
    rotation: 30,
    opacity:0
  }, "-=2")
  
  ////////////
  // About //
  ////////////

  gsap.from("#about-img img", {
    scrollTrigger : {
      toggleActions: "restart complete restart restart",
      trigger: '#about-img img' ,
        } ,
        y : 150,
        opacity:0,
        duration:2
  })

  ////////////
  // Skills //
  ////////////

  gsap.from(".sasa", {
    scrollTrigger : {
      toggleActions: "restart none restart none",
      trigger : '.sasa',
    } ,
    width : 0,
    duration:2
  })

  ////////////
  // Education //
  ////////////

  gsap.utils.toArray(".box").forEach(box => {
    var tll = gsap.timeline({
      scrollTrigger: {
        trigger: box,
        toggleActions: "restart none restart none",
      }
    });
  
    tll.from(box, {
      duration: 3,
      y: -100,
      opacity: 0,
      color: "green" ,
    });

  });

  gsap.from(".ball", {
    scrollTrigger : {
      trigger: '.ball' ,
        } ,
        backgroundColor: "orange" ,
        opacity:0,
        rotation: -2080,
        duration:2
  })


  // Carousel

  var slideIndex = 1;
showSlides(slideIndex);

function plusSlides(n) {
  showSlides(slideIndex += n);
}

function currentSlide(n) {
  showSlides(slideIndex = n);
}

function showSlides(n) {
  var i;
  var slides = document.getElementsByClassName("mySlides");
  if (n > slides.length) {slideIndex = 1} 
  if (n < 1) {slideIndex = slides.length}
  for (i = 0; i < slides.length; i++) {
      slides[i].style.display = "none"; 
  }  
  slides[slideIndex-1].style.display = "block"; 
}