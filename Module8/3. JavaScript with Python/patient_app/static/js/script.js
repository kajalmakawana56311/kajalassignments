function validateForm() {

    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let age = document.getElementById("age").value;
    let error = document.getElementById("error");

    error.innerHTML = "";

    if (name === "") {
        error.innerHTML = "Name is required";
        return false;
    }

    if (email === "" || !email.includes("@")) {
        error.innerHTML = "Valid email required";
        return false;
    }

    if (age < 13) {
        error.innerHTML = "Age must be 13+";
        return false;
    }

    alert("Form Submitted Successfully");
    return true;
}