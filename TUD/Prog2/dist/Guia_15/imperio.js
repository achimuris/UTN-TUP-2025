"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Imperio {
    _nombre;
    get nombre() {
        return this._nombre;
    }
    set nombre(value) {
        this._nombre = value;
    }
    _flota;
    constructor(pNombre, pFlota) {
        this._nombre = pNombre;
        this._flota = pFlota;
    }
    Presentarse() {
        let mensaje;
        mensaje = "Soy el imperio " + this.nombre + "\n";
        mensaje = mensaje + "Y tengo " + this._flota.length + " de barquitos de flota";
        return mensaje;
    }
}
exports.default = Imperio;
//# sourceMappingURL=imperio.js.map