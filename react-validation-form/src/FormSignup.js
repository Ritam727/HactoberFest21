import React from 'react'
import validate from './validateInfo'
import useForm from './useForm'
import './Form.css';
import './Form.css'
const FormSignup = ({ submitForm }) => {
    const {handleChange,values,handleSubmit,errors} = useForm(submitForm,validate);
    return (
        <div className="form-content" >
            <div className="container">
                {/* form for data  */}
            <form onSubmit={handleSubmit} className="form" noValidate>
            <h1>
          Sign up here
        </h1>
                <>
                    <div className="form-inputs">
                    <label htmlFor="name" className="form-label">Name:</label>
                    <input type="text" name='name' className="form-input" placeholder="Enter your name" value={values.name} onChange={handleChange} />
                    {errors.name && <p>{errors.name}</p>}
                    </div>

                    <div className="form-inputs">
                    <label htmlFor="phone" className="form-label">Contact Number:</label>                  
                    <input type="text" name="phone" className="form-input" placeholder="Enter your Contact Number" value={values.phone} onChange={handleChange} />
                    {errors.phone && <p>{errors.phone}</p>} 
                    </div>
                    <div className="form-inputs"> 
                    <label htmlFor="email" className="form-label">Email ID:</label>  
                    <input type="email" name="email" className="form-input" placeholder="Enter your Smail ID" value={values.email} onChange={handleChange}/>
                    {errors.email && <p>{errors.email}</p>}
                    </div>
                    <div className="form-inputs">
                    <label htmlFor="password" className="form-label">Password:</label>  
                    <input type="password" name="password" className="form-input" placeholder="Enter your Password (atleast 6 characters)" value={values.password} onChange={handleChange}/>
                    {errors.password && <p>{errors.password}</p>}
                    </div>
                    <div className="form-inputs">
                    <label htmlFor="password2" className="form-label">Confirm Password:</label>  
                    <input type="password" name="password2" className="form-input" placeholder="Confirm your Password" value={values.password2} onChange={handleChange}/>
                    {errors.password2 && <p>{errors.password2}</p>}
                    </div>
                    <div className="form-inputs">
                    <button className="form-input-btn" type="submit">Submit</button>
                    <div className="form-input-login">
                        Already have an account? <a href="#">Login here</a>
                    </div>
                    </div>
                </>
            </form>
            </div>
        </div>
    )
}
export default FormSignup;