import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import { NavigationContainer } from '@react-navigation/native';
import { createStackNavigator } from '@react-navigation/stack';
import HomeScreen from './screens/HomeScreen';
import AddNewContact from './screens/AddNewContact';
import EditContact from './screens/EditContact';
import ViewContact from './screens/ViewContact';
import * as firebase from 'firebase'

var firebaseConfig = {
    apiKey: "AIzaSyCWHYM8oGTeuU1JMmNvzxx3dQiPI1GC008",
    authDomain: "contactapp-217b5.firebaseapp.com",
    databaseURL: "https://contactapp-217b5.firebaseio.com",
    projectId: "contactapp-217b5",
    storageBucket: "contactapp-217b5.appspot.com",
    messagingSenderId: "1026856598325",
    appId: "1:1026856598325:web:4123d07a0f813757b92a7c",
    measurementId: "G-Z04M2L1CK5"
  };
// Initialize Firebase
firebase.initializeApp(firebaseConfig);

const Stack = createStackNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen name="Home" component={HomeScreen} />
        <Stack.Screen name="Add" component={AddNewContact} />
        <Stack.Screen name="Edit" component={EditContact} />
        <Stack.Screen name="View" component={ViewContact} />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
