"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const claustrofobico_1 = __importDefault(require("./Micros/claustrofobico"));
const micro_1 = __importDefault(require("./Micros/micro"));
const obsecuente_1 = __importDefault(require("./Micros/obsecuente"));
const objMicro1 = new micro_1.default(0, 4, 150);
const empeladosACargo = new Set();
const empleClaustro = new claustrofobico_1.default("José", "Juarez", "123", undefined, undefined);
const empleadoObsecuento = new obsecuente_1.default("PEdro", "El obsecuente", "123", empleClaustro, new Set());
if (empleClaustro.meSuboEnMicro(objMicro1))
    console.log("Me puedo subir al micro");
else
    console.log("No me puedo subir en el micro");
//# sourceMappingURL=index.js.map