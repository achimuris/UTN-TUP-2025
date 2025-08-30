import Barco from "./Guia_15/barco";
import Lancha from "./Guia_15/lancha";
import Acorazado from "./Guia_15/acorazado";

const objLancha1 = new Lancha("El Gaucho", 100, 100, 100, true);
const objLancha2 = new Lancha("La Gaucha", 100, 100, 100, true);
const objAcorazado1 = new Acorazado("Mi acorazado", 20, 100, 90, 125);


console.log(objLancha1.presentarse());
console.log(objLancha2.presentarse());
console.log(objAcorazado1.presentarse());



//console.log(objPersona.apellido);