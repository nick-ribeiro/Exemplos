const fs = require('fs');

const dadosJson = fs.readFileSync('dados.json');
const objdados = JSON.parse(dadosJson);

var Val = [];

objdados.map(function(item, index)
{
    Val.push(item.valor);
}) 

var min = Math.min(...Val);
var max = Math.max(...Val);

var total = 0;
var qtd = Val.length;
var media;

Val = Val.filter(e => e !== 0);

for (var i = 0; i < Val.length; i++) {
    total += Val[i];
}

media = total / qtd;

var dias = 0;
for(var i = 0; i < Val.length; i++) {
    if(media < Val[i]) {
        dias = dias + 1;
    }
}

var min2 = Math.min(...Val);

console.log('Maior valor encontrado: ', max);
console.log('Menor valor encontrado: ', min);
console.log('Menor valor encontrado diferente de zero: ', min2);
console.log('Total de dias em que o faturamento foi maior que a media mensal: ', dias);