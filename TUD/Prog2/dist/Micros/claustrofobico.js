"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const empleado_1 = __importDefault(require("./empleado"));
class Claustrofobico extends empleado_1.default {
    toleranciaVolumen = 120;
    meSuboEnMicro(pMicro) {
        if (pMicro.volumen <= this.toleranciaVolumen)
            return false;
        else
            return true;
    }
}
//# sourceMappingURL=claustrofobico.js.map