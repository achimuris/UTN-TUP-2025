"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const empleado_1 = __importDefault(require("./empleado"));
class Moderado extends empleado_1.default {
    _cantidadX;
    constructor(pNombre, pApellido, pLegajo, pJefe, pEmpleadosACargo, pCantidadX) {
        super(pNombre, pApellido, pLegajo, pJefe, pEmpleadosACargo);
        this._cantidadX = pCantidadX;
    }
    meSuboEnMicro(pMicro) {
        if (pMicro.espaciosLibres() >= this._cantidadX)
            return true;
        else
            return false;
    }
}
exports.default = Moderado;
//# sourceMappingURL=moderado.js.map