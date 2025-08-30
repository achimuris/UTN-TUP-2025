"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const persona_1 = __importDefault(require("./persona"));
const Visitante_1 = __importDefault(require("./Visitante"));
class Guardia extends persona_1.default {
    controlarDocumento(pVisitante) {
        return "Adelante " + pVisitante.presentarse() + " con DNI: " + pVisitante.dni.toString();
    }
    presentarse() {
        return `Hola, mi nombre es ${super.presentarse()}  y soy el Guardia.`;
    }
}
exports.default = Guardia;
const objVisitante = new Visitante_1.default("Rodrigo", "Rey", 123123);
const objGuardia = new Guardia("Cristiano", "Ronaldo");
console.log(objGuardia.controlarDocumento(objVisitante));
//# sourceMappingURL=Guardia.js.map