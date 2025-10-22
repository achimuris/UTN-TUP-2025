"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Inmueble {
    _provincia;
    get provincia() {
        return this._provincia;
    }
    set provincia(value) {
        this._provincia = value;
    }
    _barrio;
    get barrio() {
        return this._barrio;
    }
    set barrio(value) {
        this._barrio = value;
    }
    _nombreCalle;
    get nombreCalle() {
        return this._nombreCalle;
    }
    set nombreCalle(value) {
        this._nombreCalle = value;
    }
    _altura;
    get altura() {
        return this._altura;
    }
    set altura(value) {
        this._altura = value;
    }
    _observacion;
    get observacion() {
        return this._observacion;
    }
    set observacion(value) {
        this._observacion = value;
    }
    _esBarrioPrivado;
    get esBarrioPrivado() {
        return this._esBarrioPrivado;
    }
    set esBarrioPrivado(value) {
        this._esBarrioPrivado = value;
    }
    _tieneCloaca;
    get tieneCloaca() {
        return this._tieneCloaca;
    }
    set tieneCloaca(value) {
        this._tieneCloaca = value;
    }
    _tieneSuministroAGas;
    get tieneSuministroAGas() {
        return this._tieneSuministroAGas;
    }
    set tieneSuministroAGas(value) {
        this._tieneSuministroAGas = value;
    }
    _estaEnVenta;
    get estaEnVenta() {
        return this._estaEnVenta;
    }
    set estaEnVenta(value) {
        this._estaEnVenta = value;
    }
    _contacto;
    get contacto() {
        return this._contacto;
    }
    set contacto(value) {
        this._contacto = value;
    }
    _ambientes = new Array();
    constructor(pProvincia, pBarrio, pNombreCalle, pAltura, pEsBarrioPrivado, pTieneCloaca, pTieneGas, pContacto, pAmbientes, pObservacion = "", pEstaEnVenta = false) {
        this._altura = pAltura;
        this._ambientes = pAmbientes;
        this._tieneCloaca = pTieneCloaca;
        this._barrio = pBarrio;
        this._nombreCalle = pNombreCalle;
        this._esBarrioPrivado = pEsBarrioPrivado;
        this._tieneSuministroAGas = pTieneGas;
        this._provincia = pProvincia;
        this._contacto = pContacto;
        this._observacion = pObservacion;
        this._estaEnVenta = pEstaEnVenta;
    }
    cantidadAmbientes() {
        return this._ambientes.length;
    }
    superficieCubierta() {
        let superficie = 0;
        for (let unAmbiente of this._ambientes) {
            if (unAmbiente.esCubierto)
                superficie = +unAmbiente.dimension();
        }
        return superficie;
    }
    superficieDescubierta() {
        let superficie = 0;
        for (let unAmbiente of this._ambientes) {
            if (!unAmbiente.esCubierto)
                superficie = +unAmbiente.dimension();
        }
        return superficie;
    }
    superficieTotal() {
        console.log("Superficie techada: " + this.superficieDescubierta());
        console.log("Superficie cubierta: " + this.superficieCubierta());
        return this.superficieCubierta() + this.superficieDescubierta();
    }
}
exports.default = Inmueble;
//# sourceMappingURL=inmueble.js.map