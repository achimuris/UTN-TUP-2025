import Claustrofobico from "./Micros/claustrofobico";
import Empleado from "./Micros/empleado";
import Micro from "./Micros/micro";
import Obsecuente from "./Micros/obsecuente";


const objMicro1 = new Micro(0, 4, 150);
const empeladosACargo : Set<Empleado> = new Set<Empleado>();

const empleClaustro = new Claustrofobico("José", "Juarez", "123", undefined, undefined);
const empleadoObsecuento = new Obsecuente("PEdro", "El obsecuente", "123", empleClaustro, new Set<Empleado>());

if (empleClaustro.meSuboEnMicro(objMicro1))
    console.log("Me puedo subir al micro");
else
    console.log("No me puedo subir en el micro");

