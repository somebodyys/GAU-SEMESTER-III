import { browser } from 'protractor';
import { Component } from '@angular/core';
import { TranslateService} from '@ngx-translate/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  constructor(public translate : TranslateService){
    translate.addLangs(['en', 'geo']);
    translate.setDefaultLang('en')
    const browserLang = translate.getBrowserLang();
    translate.use(browserLang.match(/en|geo/) ? browserLang : 'en');
  }
}
