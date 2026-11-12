"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const lancha_1 = __importDefault(require("./lancha"));
const objLancha1 = new lancha_1.default("El Gaucho", 100, 100, 100, true, 300);
const objLancha2 = new lancha_1.default("La Gaucha", 100, 100, 100, true, 299);
console.log(objLancha1.presentarse());
objLancha1.remolcar(objLancha2);
//# sourceMappingURL=index.js.map