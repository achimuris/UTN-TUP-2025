"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Contacto {
    _nombre;
    get nombre() {
        return this._nombre;
    }
    set nombre(value) {
        this._nombre = value;
    }
    _apellido;
    get apellido() {
        return this._apellido;
    }
    set apellido(value) {
        this._apellido = value;
    }
    _email;
    get email() {
        return this._email;
    }
    set email(value) {
        this._email = value;
    }
    _telefono;
    get telefono() {
        return this._telefono;
    }
    set telefono(value) {
        this._telefono = value;
    }
    info() {
        return this._apellido + ", " + this.nombre + " (" + this.telefono + " - " + this.email + ")";
    }
    constructor(pNombre, pApellido, pEmail, pTelefono) {
        this._apellido = pApellido;
        this._email = pEmail;
        this._nombre = pNombre;
        this._telefono = pTelefono;
    }
}
exports.default = Contacto;
//# sourceMappingURL=contacto.js.map