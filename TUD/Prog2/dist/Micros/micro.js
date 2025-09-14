"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Micro {
    _capacidadDeSentados;
    _capacidadDeParados;
    _volumen;
    constructor(pCapacidadDeSentados, pCapacidadDeParados, pVolumen) {
        this._capacidadDeSentados = pCapacidadDeSentados;
        this._capacidadDeParados = pCapacidadDeParados;
        this._volumen = pVolumen;
    }
    get capacidadDeSentados() {
        return this.capacidadDeSentados;
    }
    espaciosLibres() {
        let espacioLibreSentado = this._capacidadDeSentados;
        espacioLibreSentado = espacioLibreSentado - this.sentados.length;
        let espacioLibreParado = this._capacidadDeParados;
        espacioLibreParado = espacioLibreParado - this.parados.length;
        return (espacioLibreParado + espacioLibreSentado);
    }
    get volumen() {
        return this._volumen;
    }
    get capacidadDeParados() {
        return this._capacidadDeParados;
    }
    sentados = new Array();
    parados = new Array();
    capacidadTotal() {
        return this._capacidadDeParados + this.capacidadDeSentados;
    }
    hayLugar() {
        if (this.sentados.length + this.parados.length < this.capacidadTotal())
            return true;
        return false;
    }
    hayLugarParado() {
        if (this.parados.length < this._capacidadDeParados)
            return true;
        else
            return false;
    }
    hayLugarSentado() {
        if (this.sentados.length < this._capacidadDeSentados)
            return true;
        else
            return false;
    }
    estaVacio() {
        if (this.parados.length == 0 && this.sentados.length == 0)
            return true;
        else
            return false;
    }
    ultimoEmpleadoEnSubirseySentarse() {
        if (!this.estaVacio()) {
            return this.sentados.pop();
        }
        return undefined;
    }
    ultimoEmpleadoEnSubirseParado() {
        if (!this.estaVacio()) {
            return this.parados.pop();
        }
        return undefined;
    }
    bajarEmpleado() {
        if (this.estaVacio())
            throw new Error("El micro esta vacio, no se puede bajar alguien que no existe");
        if (this.parados.length > 0) {
            this.parados.pop();
            return true;
        }
        return false;
    }
}
exports.default = Micro;
//# sourceMappingURL=micro.js.map