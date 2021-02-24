import { FirebaseService } from './../services/firebase.service';
import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators} from '@angular/forms'



@Component({
  selector: 'app-sign-up',
  templateUrl: './sign-up.component.html',
  styleUrls: ['./sign-up.component.css']
})
export class SignUpComponent implements OnInit {

  strength:string = ""
  city =[
    {value: "tbilisi" ,viewValue: "Tbilisi"},
    {value: "batumi", viewValue: "Batumi"},
    {value: "qutaisi", viewValue: "Qutaisi"},
    {value: "ozurgeti", viewValue: "Ozurgeti"},
    {value: "qobuleti", viewValue: "Qobuleti"}
  ]

  country = [
    {value: "georgia", viewValue: "Georgia"},
    {value: "usa", viewValue: "U.S.A"},
    {value: "canada", viewValue: "Canada"},
    {value: "uk", viewValue: "United Kingdom"}
  ]

  myForm: FormGroup;
  registrationDate: string;
  constructor(private fb: FormBuilder) {
    this.registrationDate = new Date().toISOString()
    this.myForm = this.fb.group({
      username: ['',[
        Validators.required,
        Validators.minLength(3),
        Validators.maxLength(15)
      ]],
      email: ['',[
        Validators.required,
        Validators.email
      ]],
      password: ['',[
        Validators.required,
        Validators.pattern('^(?=.*[0-9])(?=.*[a-zA-Z])([a-zA-Z0-9]+)$')
      ]],
      confirmPassword:['',[
        Validators.required,
        Validators.pattern('^(?=.*[0-9])(?=.*[a-zA-Z])([a-zA-Z0-9]+)$')
      ]],
      regDate: this.registrationDate,
      countryCode:["",[
        Validators.required,
        Validators.minLength(2),
        Validators.maxLength(4)
      ]], 
      prefix: ["",[
        Validators.required,
        Validators.minLength(3),
        Validators.maxLength(3)
      ]],
      phoneNumber: ["",[
        Validators.required,
        Validators.minLength(6),
        Validators.maxLength(6)
      ]],
      city:['',[
        Validators.required
      ]],
      country:['',[
        Validators.required
      ]]
    });
  }

  checkStrength(){
    let password = this.password?.value
    if(password.length == 0){
      this.strength = ""
    } else if(password.length <= 3){
      this.strength = "Too weak"
    } else if(password.length <= 6){
      this.strength = "Normal"
    } else{
      this.strength = "Strong"
    }
  }

  get username(){
    return this.myForm.get('username')
  }

  get email(){
    return this.myForm.get('email')
  }

  get password(){
    return this.myForm.get('password')
  }

  get confirmPassword(){
    return this.myForm.get('confirmPassword')
  }

  get countryCode(){
    return this.myForm.get('countryCode')
  }

  get prefix(){
    return this.myForm.get('prefix')
  }

  get phoneNumber(){
    return this.myForm.get('phoneNumber')
  }

  get userCity(){
    return this.myForm.get('city')
  }

  get userCountry(){
    return this.myForm.get('country')
  }
  ngOnInit(){
    
  }
}
