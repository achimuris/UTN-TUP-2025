"use strict";
let vectorDeNumeros = new Array();
vectorDeNumeros.push(4);
vectorDeNumeros.push(4);
vectorDeNumeros.push(4);
vectorDeNumeros.pop();
vectorDeNumeros.push(6);
vectorDeNumeros.push(5);
vectorDeNumeros.forEach(elemento => {
    console.log(elemento);
});
for (let elemento of vectorDeNumeros) {
    if ((elemento % 2) == 0)
        console.log(elemento);
}
//# sourceMappingURL=indexColecciones.js.map