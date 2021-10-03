import React from "react";
import './Form.css';
import loading from './loading.png';
export default class FormSuccess extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      movie: null,
      webseries: null,
      items: [],
      isloaded: false
    }
  }

  async componentDidMount() {

    const url = "https://my-json-server.typicode.com/viswa2811/aspsaarang2022";

    const url1 = url + "/welcome"          //fetching movie from welcome endpoint
    const res = await fetch(url1);
    const endpoint = await res.json();
    this.setState({ movie: endpoint.name, isloaded: true });

    const url2 = url + "/" + endpoint.next;  //fetching webseries from  endpoint2
    const res2 = await fetch(url2);
    const endpoint2 = await res2.json();
    this.setState({ webseries: endpoint2.name });

    const url3 = url + "/" + endpoint2.next;   //fetching  data from  endpoint3
    const res3 = await fetch(url3);
    const endpoint3 = await res3.json();
    const data = endpoint3.map(item => {
      return (
        <li>
          <div class="item">
            <h4> Name : <b> {item.name} </b></h4>
            <h4> Email: {item.email} </h4>
            {/* <p> Username: {item.username} </p>
            <p>Address: {item.address.street} , {item.address.suite} , {item.address.city} , {item.address.zipcode} , ({item.address.geo.lat} , {item.address.geo.lat} )</p>
            <p>Phone: {item.phone} </p>
            <p>Website: {item.website} </p>
            <p>Company: {item.company.name} , {item.company.catchPhrase} , {item.company.bs} </p> */}
          </div>
        </li>

      )
    });
    this.setState({ items: data });
  }

  render() {
    if (!this.state.isloaded) {
      return(
      <div className="load">
        <img src={loading} alt="error" />
        <h2>Loading...
           </h2>
           <h3>Connect to internet</h3>
      </div>);
    }
    else {
      return (                            //printing of fetched info
        <div className="cards">
          <div className="card">
            <h2>Movie: {this.state.movie}</h2>
          </div>
          <div className="card">
            <h2>Webseries: {this.state.webseries}</h2>
          </div>
          <div className="card">
            <h1>Data:</h1>
            <ol>{this.state.items}</ol>
          </div>
        </div>
      );
    }
  }
}