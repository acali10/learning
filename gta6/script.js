const tl = gsap.timeline({
  scrollTrigger: {
    trigger: ".divPai",
    pin: true,
    scrub: 2,
    start: "top top",
    end: "+=2000",
  }
});

tl.to(".hero", {
  maskSize: "20vw",
  maskPosition: "center",
  duration: 2
});

tl.to(".heroImg2", {
  opacity: 0,
  duration: 1
}, "-=2"); 

tl.to(".telaBranca", {
  backgroundColor: "white",
  duration: 1
}, "-=1"); 

tl.from(".secao2", {
  opacity: 0,
  filter: "blur(20px)",
  duration: .5
}, "+=0.3");
