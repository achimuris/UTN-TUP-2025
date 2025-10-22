"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Ambiente {
    _ancho;
    get ancho() {
        return this._ancho;
    }
    set ancho(value) {
        this._ancho = value;
    }
    _largo;
    get largo() {
        return this._largo;
    }
    set largo(value) {
        this._largo = value;
    }
    _esLuminoso;
    get esLuminoso() {
        return this._esLuminoso;
    }
    set esLuminoso(value) {
        this._esLuminoso = value;
    }
    _tipo;
    get tipo() {
        return this._tipo;
    }
    set tipo(value) {
        this._tipo = value;
    }
    _esCubierto;
    get esCubierto() {
        return this._esCubierto;
    }
    set esCubierto(value) {
        this._esCubierto = value;
    }
    constructor(pAncho, pLargo, pEsLuminoso, pTipo, pEsCubierto) {
        this._ancho = pAncho;
        this._largo = pLargo;
        this._tipo = pTipo;
        this._esLuminoso = pEsLuminoso;
        this._esCubierto = pEsCubierto;
    }
    dimension() {
        return this.ancho * this.largo;
    }
}
exports.default = Ambiente;
//# sourceMappingURL=ambiente.js.map