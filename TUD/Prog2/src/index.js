"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var singleton_1 = require("./Patrones/singleton");
console.log(singleton_1.default.presentarse());
singleton_1.default.nuevoPresidente("Leonardo", "Pinkas", "Ing.");
console.log(singleton_1.default.presentarse());
singleton_1.default.nuevoPresidente("Andrés", "Chimuris", "Ing.");
console.log(singleton_1.default.presentarse());
