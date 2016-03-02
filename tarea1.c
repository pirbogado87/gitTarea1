//: Playground - noun: a place where people can play

import UIKit

var rango = 1...100

for i in rango{
    
    
    if i % 5 == 0{
        if i >= 30 && i <= 40{
            print("#\(i)\t Viva Swift!!")
        }else{
            print("#\(i)\t BINGO!!!")
        }
    }else if i % 2 == 0{
        if i >= 30 && i <= 40{
            print("#\(i)\t Viva Swift!!")
        }else{
            print("#\(i)\t PAR!!")
        }
    }else if i % 2 != 0{
        if i >= 30 && i <= 40{
            print("#\(i)\t Viva Swift!!")
        }else{
            print("#\(i)\t IMPAR!!")
        }
    }
    
    
}
