"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const persona_1 = __importDefault(require("./persona"));
class Visitante extends persona_1.default {
    _dni;
    set dni(value) {
        this._dni = value;
    }
    get dni() {
        return this._dni;
    }
    constructor(pNombre, pApellido, pDni) {
        super(pNombre, pApellido);
        this._dni = pDni;
    }
}
exports.default = Visitante;
//# sourceMappingURL=Visitante.js.map