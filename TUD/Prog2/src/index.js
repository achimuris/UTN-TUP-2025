"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var claustrofobico_1 = require("./Micros/claustrofobico");
var micro_1 = require("./Micros/micro");
var objMicro1 = new micro_1.default(0, 4, 150);
var empeladosACargo = new Set();
var empleClaustro = new claustrofobico_1.default("José", "Juarez", "123", undefined, empeladosACargo);
if (empleClaustro.meSuboEnMicro(objMicro1))
    console.log("Me puedo subir al micro");
else
    console.log("No me puedo subir en el micro");
