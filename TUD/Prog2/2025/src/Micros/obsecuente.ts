import Empleado from "./empleado";
import Micro from "./micro";

export default class Obsecuente extends Empleado
{
    public constructor (pNombre : string, pApellido : string, pLegajo : string, pJefe : Empleado, pEmpleadosACargo : Set<Empleado>)
    {
        super(pNombre, pApellido, "555", pJefe, pEmpleadosACargo);
    }

    public meSuboEnMicro(pMicro: Micro): boolean {
        if (this.jefe instanceof Empleado)
            return this.jefe.meSuboEnMicro(pMicro);
        else
            return false;
    }
    
}