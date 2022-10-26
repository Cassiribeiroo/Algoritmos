/*2 – Adicione itens para vender nesta cantina!
Crie alguns itens que poderão ser vendidos. Cada um com uma promoção imperdível.
Estes novos produtos deverão também estar presentes no menu interativo
Lembre-se, cada item vendido deverá ir para uma lista.*/

const cantina = {
    quantidade: [],
    controle: 0,
    controleR: 0,
    controleB: 0
}
let caixa = 0;

function menu(opcao){
    do{
        alert("MENU \n1- UM Cachorro-quente ---- 8R$\n2- DOIS Cachorros-quentes ---- 15R$ \n3- UM Refrigerante ---- 5R$ \n4- DOIS Refrigerantes ---- 9R$ \n5- UMA Batata frita ---- 12R$ \n6- DUAS Batatas fritas ---- 20R$ \n7- Consultar vendas \n8- Sair do MENU");
        opcao = parseInt(prompt("Informe a Opcao"));

        switch(opcao){
        case 1:
            alert("Compra de 1 cachorro quente realizada");
            cantina.quantidade.push("1 cachorro-quente, 8R$");
            cantina.controle = cantina.controle +1;
            caixa = caixa + 8;
            break;

        case 2:
            alert("Compra de 2 cachorros-quentes realizada");
            cantina.quantidade.push("2 cachorros-quente, 15R$");
            cantina.controle = cantina.controle+2;
            caixa = caixa + 15;
            break;
        
        case 3:
            alert("Compra de 1 refrigerante realizada");
            cantina.quantidade.push("1 refrigerante, 5R$");
            cantina.controleR = cantina.controleR+1;
            caixa = caixa + 5;
            break;
        
        case 4:
            alert("Compra de 2 refrigerantes realizada");
            cantina.quantidade.push("2 refrigerantes, 9R$");
            cantina.controleR = cantina.controleR+2;
            caixa = caixa + 9;
            break;

        case 5:
            alert("Compra de 1 batata frita realizada");
            cantina.quantidade.push("1 batata frita, 12R$");
            cantina.controleB = cantina.controleB+1;
            caixa = caixa + 12;
            break;

        case 6:
            alert("Compra de 2 batatas fritas realizada");
                cantina.quantidade.push("2 batatas fritas, 20R$");
                cantina.controleB = cantina.controleB+2;
                caixa = caixa + 20;
                break;

        case 7:
            for(i=0; i<cantina.quantidade.length; i++){
                console.log(cantina.quantidade[i]);
            }
            alert("Total em caixa: " + JSON.stringify(caixa)+ " R$");
            break;
        }
    }while(opcao != 8);
} 

   

