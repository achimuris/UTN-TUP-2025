"use strict";
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
Object.defineProperty(exports, "__esModule", { value: true });
var persona_1 = require("./persona");
var Visitante_1 = require("./Visitante");
var Guardia = /** @class */ (function (_super) {
    __extends(Guardia, _super);
    function Guardia() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    Guardia.prototype.controlarDocumento = function (pVisitante) {
        return "Adelante " + pVisitante.presentarse() + " con DNI: " + pVisitante.dni.toString();
    };
    //Hola, mi nombre es <nombre y apellido> y soy el guardia.
    Guardia.prototype.presentarse = function () {
        return "Hola, mi nombre es ".concat(_super.prototype.presentarse.call(this), "  y soy el Guardia.");
    };
    return Guardia;
}(persona_1.default));
exports.default = Guardia;
var objVisitante = new Visitante_1.default("Rodrigo", "Rey", 123123);
var objGuardia = new Guardia("Cristiano", "Ronaldo");
console.log(objGuardia.controlarDocumento(objVisitante));
