"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const empleado_1 = __importDefault(require("./empleado"));
class Obsecuente extends empleado_1.default {
    constructor(pNombre, pApellido, pLegajo, pJefe, pEmpleadosACargo) {
        super(pNombre, pApellido, "555", pJefe, pEmpleadosACargo);
    }
    meSuboEnMicro(pMicro) {
        if (this.jefe instanceof empleado_1.default)
            return this.jefe.meSuboEnMicro(pMicro);
        else
            return false;
    }
}
exports.default = Obsecuente;
//# sourceMappingURL=obsecuente.js.map