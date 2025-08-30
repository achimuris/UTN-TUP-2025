"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Persona {
    _nombre;
    _apellido;
    get apellido() {
        return this._apellido;
    }
    set apellido(value) {
        this._apellido = value;
    }
    get nombre() {
        return this._nombre;
    }
    set nombre(value) {
        this._nombre = value;
    }
    presentarse() {
        return `${this.nombre} ${this.apellido}`;
    }
    constructor(pNombre, pApellido) {
        this._apellido = pApellido;
        this._nombre = pNombre;
    }
}
exports.default = Persona;
//# sourceMappingURL=persona.js.map