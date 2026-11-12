"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const inmueble_1 = __importDefault(require("./inmueble"));
class Casa extends inmueble_1.default {
    mostrarInformacion() {
        let mensaje = "";
        mensaje = "Casa - Contacto " + this.contacto.info() + " / Superficie: " + this.superficieTotal() + " Ambientes: " + this.cantidadAmbientes() + " (Barrio Privado: " + this.esBarrioPrivado + ")";
        return mensaje;
    }
    _tieneQuincho;
    get tieneQuincho() {
        return this._tieneQuincho;
    }
    set tieneQuincho(value) {
        this._tieneQuincho = value;
    }
    _tienePileta;
    get tienePileta() {
        return this._tienePileta;
    }
    set tienePileta(value) {
        this._tienePileta = value;
    }
    constructor(pProvincia, pBarrio, pNombreCalle, pAltura, pEsBarrioPrivado, pTieneCloaca, pTieneGas, pContacto, pAmbientes, pObservacion = "", pEstaEnVenta = false, pTienePileta = false, pTieneQuincho = false) {
        super(pProvincia, pBarrio, pNombreCalle, pAltura, pEsBarrioPrivado, pTieneCloaca, pTieneGas, pContacto, pAmbientes, pObservacion, pEstaEnVenta);
        this._tienePileta = pTienePileta;
        this._tieneQuincho = pTieneQuincho;
    }
}
exports.default = Casa;
//# sourceMappingURL=casa.js.map