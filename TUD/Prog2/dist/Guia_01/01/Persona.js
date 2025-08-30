"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Persona {
    _nombre = "";
    _apellido = "";
    get nombre() {
        return this._nombre;
    }
    set nombre(value) {
        this._nombre = value;
    }
    get apellido() {
        return this._apellido;
    }
    set apellido(value) {
        this._apellido = value;
    }
    constructor(unNombre, unApellido) {
        this.apellido = unApellido;
        this.nombre = unNombre;
    }
    mostrarValores() {
        console.log(this.apellido + ", " + this.nombre);
        return this.apellido + ", " + this.nombre;
    }
}
exports.default = Persona;
//# sourceMappingURL=Persona.js.map