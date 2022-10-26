/*
1 – Você é o dono da cantina e deseja iniciar a venda de cachorro quentes.
Um cachorro quente custa R$8,00. Se comprar dois, fica R$15,00 (oportunidade de ouro).
Faça um algoritmo que receba um pedido nesta cantina;
Você deve adicionar uma lista de produtos que já foram vendidos;
Você deve criar um controle de caixa, para ver quanto entrou de dinheiro;
*/

const cantina = {
    quantidade: [],
    controle: 0
}
let caixa = 0;

function menu(opcao){
    do{
        alert("MENU \n1- UM Cachorro-quente ---- 8R$\n2- DOIS Cachorros-quentes ---- 15R$ \n3- Consultar vendas \n4- Sair do MENU");
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
            for(i=0; i<cantina.quantidade.length; i++){
                console.log(cantina.quantidade[i]);
            }
            alert("Total em caixa: " + JSON.stringify(caixa)+ " R$");
            break;
        }
    }while(opcao != 4);
} 

   

