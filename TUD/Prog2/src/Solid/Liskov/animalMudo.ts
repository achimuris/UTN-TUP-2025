import Animal from "./animal";

export default class AniamlMudo extends Animal { 
    public makeNoise(): void { 
        throw new Error("Yo no sé hacer ruido, no hablo...");
    } 
}