"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const barco_1 = __importDefault(require("./barco"));
class Lancha extends barco_1.default {
    _motorFueraDeBorda = false;
    get MotorFueraDeBorda() {
        return this._motorFueraDeBorda;
    }
    set MotorFueraDeBorda(value) {
        this._motorFueraDeBorda = value;
    }
    remolcar(objeto) {
        if (objeto.peso() > 300)
            console.log("¡Pesa más de 300 " + objeto.descripcion);
        else
            console.log("Estamos remolcando a " + objeto.descripcion);
    }
    constructor(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pMotor, pPeso) {
        super(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pPeso);
        this.MotorFueraDeBorda = pMotor;
    }
    presentarse() {
        return "Soy una lancha llamada " + this.nombre;
    }
}
exports.default = Lancha;
//# sourceMappingURL=lancha.js.map