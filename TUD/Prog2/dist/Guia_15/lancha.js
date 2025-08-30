"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Lancha extends Barco {
    _motorFueraDeBorda = false;
    get MotorFueraDeBorda() {
        return this._motorFueraDeBorda;
    }
    set MotorFueraDeBorda(value): void {
        this._motorFueraDeBorda = value;
    }
    constructor(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pMotor) {
        super(pNombre, pVelocidad, pFlotabilidad, pEstabilidad);
        this.MotorFueraDeBorda = pMotor;
    }
    presentarse() {
        return "Soy una lancha llamada " + this.nombre;
    }
}
exports.default = Lancha;
//# sourceMappingURL=lancha.js.map