"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const barco_1 = __importDefault(require("./barco"));
class Acorazado extends barco_1.default {
    _potenciaDeFuego;
    get PotenciaDeFuego() {
        return this._potenciaDeFuego;
    }
    set PotenciaDeFuego(value) {
        this._potenciaDeFuego = value;
    }
    presentarse() {
        return "Soy un Acorazado llamado " + this.nombre + " con una potencia de fuego " + this.PotenciaDeFuego.toString();
    }
    constructor(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pPotencia, pPeso) {
        super(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pPeso);
        this._potenciaDeFuego = pPotencia;
    }
}
exports.default = Acorazado;
//# sourceMappingURL=acorazado.js.map