"use strict";
//Crear una clase Persona que tenga los atributos públicos nombre y apellido. 
// ● Crear una instancia y asignarle valores. 
// ● Mostrar por pantalla los valores asignados.
Object.defineProperty(exports, "__esModule", { value: true });
var Persona = /** @class */ (function () {
    function Persona(unNombre, unApellido) {
        //Atributos o datos miembros
        this._nombre = "";
        this._apellido = "";
        this.apellido = unApellido;
        this.nombre = unNombre;
    }
    Object.defineProperty(Persona.prototype, "nombre", {
        //Propiedades o Properties
        get: function () {
            return this._nombre;
        },
        set: function (value) {
            this._nombre = value;
        },
        enumerable: false,
        configurable: true
    });
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
    Persona.prototype.mostrarValores = function () {
        console.log(this.apellido + ", " + this.nombre);
        return this.apellido + ", " + this.nombre;
    };
    return Persona;
}());
exports.default = Persona;
