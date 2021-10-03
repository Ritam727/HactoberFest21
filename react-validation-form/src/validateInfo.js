export default function validateInfo(values) {
    let errors = {};

    if(!values.name) {                                // name validtion
        errors.name = "Name  required"
    }
    if(!values.phone) {                              //phone no validation
        errors.phone = "Contact No. required"
    } else if (values.phone.length !==10){
        errors.phone = 'Contact Number is invalid'
    }else if (!/^[0-9]+$/i.test(values.phone)){
        errors.phone = 'Contact Number is invalid'
    }

    if(!values.email) {                                 
        errors.email = "Email required"               // smail validtion
    }
    else if(!/^[A-Z0-9a-z._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$/i.test(values.email)){
        errors.email = "Email address is invalid"
    }

    if(!values.password) {                           //password validtion
        errors.password = "Password required"
    } else if (values.password.length < 6){
        errors.password = 'Password needs to be 6 characters or more'
    }
    

    if(!values.password2) {                         // password matching
        errors.password2 = "Password required"
    } else if (values.password2 !== values.password){
        errors.password2 = 'Passwords do not match'
    }

    return errors;
}