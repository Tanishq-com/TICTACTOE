let box=document.querySelectorAll(".box");
let msg=document.querySelector("#msg");
let reset=document.querySelector("#reset")
msg.style.visibility="hidden";
reset.style.visibility="hidden";

playerO=true;

const winner=[
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,4,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [2,4,6],
]

box.forEach((b) => {
    b.addEventListener("click",()=>{
        if(playerO){
            b.innerText="O";
            playerO=false;
            reset.style.visibility="visible";
        }
        
        else{
            b.innerText="X";
            reset.style.visibility="visible";
            playerO=true;
        }
        b.disabled=true;
        check();
    })
});

const check = ()=>{
    for (const win of winner) {
        let pos1=box[win[0]].innerText;
        let pos2=box[win[1]].innerText;
        let pos3=box[win[2]].innerText;
        
        if(pos1!="" && pos2!="" && pos3!=""){
            if (pos1==pos2 && pos2==pos3){
                msg.innerText=`The winner is ${pos1}`;
                msgbox();
            }
        }
    }
}

const msgbox = ()=>{
    for (const b of box) {
        b.disabled=true;
    }
    
    msg.style.visibility="visible";
    reset.innerText="New Game";
}

reset.addEventListener("click",()=>{
    box.forEach((b) => {
        b.innerText="";
        b.disabled=false;
        msg.style.visibility="hidden";
        reset.innerText="Reset Game";
        reset.style.visibility="hidden";
    });
})
