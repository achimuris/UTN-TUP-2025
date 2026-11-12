"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var Persona = /** @class */ (function () {
    function Persona(pNombre, pApellido) {
        this._apellido = pApellido;
        this._nombre = pNombre;
    }
    Object.defineProperty(Persona.prototype, "apellido", {
        get: function () {
            return this._apellido;
        },
        set: function (value) {
            this._apellido = value;
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Persona.prototype, "nombre", {
        get: function () {
            return this._nombre;
        },
        set: function (value) {
            this._nombre = value;
        },
        enumerable: false,
        configurable: true
    });
    Persona.prototype.presentarse = function () {
        return "".concat(this.nombre, " ").concat(this.apellido);
    };
    return Persona;
}());
exports.default = Persona;
