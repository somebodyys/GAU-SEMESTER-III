import { SignUpComponent } from './sign-up/sign-up.component';
import { DownloadComponent } from './download/download.component';
import { DiscoverComponent } from './discover/discover.component';
import { WelcomeComponent } from './welcome/welcome.component';
import { SignInComponent } from './sign-in/sign-in.component'
import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

const routes: Routes = [
  { path: 'welcome', component: WelcomeComponent},
  { path: 'discover', component: DiscoverComponent},
  { path: 'download', component: DownloadComponent},
  { path: 'sign-up', component: SignUpComponent},
  { path: 'sign-in', component: SignInComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
