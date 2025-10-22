"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const claustrofobico_1 = __importDefault(require("./claustrofobico"));
const persona_1 = __importDefault(require("./persona"));
class Empleado extends persona_1.default {
    _legajo;
    get legajo() {
        return this._legajo;
    }
    constructor(pNombre, pApellido, pLegajo, pJefe) {
        super(pNombre, pApellido);
        this.legajo = pLegajo;
        this.jefe = new claustrofobico_1.default("", "", "", "");
    }
    constructor(pNombre, pApellido, pLegajo, pJefe, pEmpleadosACargo = new Set()) {
        super(pNombre, pApellido);
        this._legajo = pLegajo;
        this._jefe = pJefe;
        this._empleadosACargo = pEmpleadosACargo;
    }
    _jefe;
    get jefe() {
        return this._jefe;
    }
    _empleadosACargo;
    esJefe() {
        if (this._empleadosACargo.size >= 1)
            return true;
        return false;
    }
}
exports.default = Empleado;
//# sourceMappingURL=empleado.js.map