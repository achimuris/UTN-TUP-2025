"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const empleado_1 = __importDefault(require("./empleado"));
class Apurado extends empleado_1.default {
    meSuboEnMicro(pMicro) {
        return true;
    }
}
exports.default = Apurado;
//# sourceMappingURL=apurado.js.map