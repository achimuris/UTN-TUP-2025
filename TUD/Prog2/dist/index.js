"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const lancha_1 = __importDefault(require("./Guia_15/lancha"));
const acorazado_1 = __importDefault(require("./Guia_15/acorazado"));
const objLancha1 = new lancha_1.default("El Gaucho", 100, 100, 100, true);
const objLancha2 = new lancha_1.default("La Gaucha", 100, 100, 100, true);
const objAcorazado1 = new acorazado_1.default("Mi acorazado", 20, 100, 90, 125);
console.log(objLancha1.presentarse());
console.log(objLancha2.presentarse());
console.log(objAcorazado1.presentarse());
//# sourceMappingURL=index.js.map