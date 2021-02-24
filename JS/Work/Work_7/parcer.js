//ეს არის სკრიპტი რომელიც ნებისმიერ საიტზე ამოიღებს მთლიან ტექსტს და გადააქცევს JSON ობიექტად.
window.addEventListener('DOMContentLoaded', () =>{
    const body = document.querySelector('body');
    var myObject = {}
    var counter = 0;
    function getText(element){
        element.childNodes.forEach(node => {
        
            if(node.nodeName === "#text" || node.children === undefined){
                return;
            } else if (node.children.length == 0){
                myObject[counter] = node.innerHTML
                counter += 1
            }else{
                getText(node)
            }
            
            
        })
    }
    getText(body);

    console.dir(myObject)
})