"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Persona {
    _nombre;
    _apellido;
    get nombre() {
        return this._nombre;
    }
    get apellido() {
        return this._apellido;
    }
    constructor(pNombre, pApellido) {
        this._nombre = pNombre;
        this._apellido = pApellido;
    }
}
exports.default = Persona;
//# sourceMappingURL=persona.js.map