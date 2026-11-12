//Crear una clase Persona que tenga los atributos públicos nombre y apellido. 
// ● Crear una instancia y asignarle valores. 
// ● Mostrar por pantalla los valores asignados.

export default  class Persona
{
    //Atributos o datos miembros
    private _nombre: string = "";
    private _apellido: string = "";


    //Propiedades o Properties
    public get nombre(): string {
        return this._nombre;
    }
    public set nombre(value: string) {
        this._nombre = value;
    }
    
    public get apellido(): string {
        return this._apellido;
    }
    public set apellido(value: string) {
        this._apellido = value;
    }

    constructor(unNombre: string, unApellido: string){
        this.apellido=unApellido;
        this.nombre=unNombre;
    }

    public mostrarValores(): string{

        console.log(this.apellido + ", " + this.nombre);
        return this.apellido + ", " + this.nombre;
    }
}