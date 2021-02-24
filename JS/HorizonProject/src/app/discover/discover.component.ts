import { Component, OnInit } from '@angular/core';
import places from '../../assets/DiscoverContent/places.json'

@Component({
  selector: 'app-discover',
  templateUrl: './discover.component.html',
  styleUrls: ['./discover.component.css']
})
export class DiscoverComponent {

  placeList:{
    TITLE:string,
    LOCATION:string,
    URL:string,
    STARS:string,
    DIF:string,
    LENGTH:string
  }[] = places;

}
