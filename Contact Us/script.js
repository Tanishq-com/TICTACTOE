document.getElementById('contactForm').addEventListener('submit', function(e) {
  e.preventDefault();

  // Simple form validation (already handled by HTML5 'required', but can be extended)
  const name = this.name.value.trim();
  const email = this.email.value.trim();
  const message = this.message.value.trim();

  if (!name || !email || !message) {
    alert('Please fill in all required fields.');
    return;
  }

  // Simulate form submission
  alert('Thank you for reaching out, ' + name + '! We have received your message.');

  // Optionally reset form
  this.reset();
});
