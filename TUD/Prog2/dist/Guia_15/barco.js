"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Barco {
    _nombre = "";
    get nombre() {
        return this._nombre;
    }
    set nombre(value) {
        this._nombre = value;
    }
    descripcion() {
        return this._nombre;
    }
    _peso;
    peso() {
        return this._peso;
    }
    constructor(pNombre, pVelocidad, pFlotabilidad, pEstabilidad, pPeso) {
        this.nombre = pNombre;
        this.velocidad = pVelocidad;
        this.estabilidad = pEstabilidad;
        this.flotabilidad = pFlotabilidad;
        this._peso = pPeso;
    }
    _velocidad;
    get velocidad() {
        return this._velocidad;
    }
    set velocidad(value) {
        this._velocidad = value;
    }
    _flotabilidad;
    get flotabilidad() {
        return this._flotabilidad;
    }
    set flotabilidad(value) {
        this._flotabilidad = value;
    }
    _estabilidad;
    get estabilidad() {
        return this._estabilidad;
    }
    set estabilidad(value) {
        this._estabilidad = value;
    }
}
exports.default = Barco;
//# sourceMappingURL=barco.js.map