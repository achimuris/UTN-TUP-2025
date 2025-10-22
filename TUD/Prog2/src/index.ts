
import Presidente from "./Patrones/singleton/singleton/singleton";



//Singleton
console.log(Presidente.presentarse());
Presidente.nuevoPresidente("Leonardo", "Pinkas", "Ing.");
console.log(Presidente.presentarse());
Presidente.nuevoPresidente("Andrés", "Chimuris", "Ing.");
console.log(Presidente.presentarse());
//Fin Singleton